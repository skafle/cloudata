// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "ThriftCloudataService.h"
#include <protocol/TBinaryProtocol.h>
#include <server/TSimpleServer.h>
#include <transport/TServerSocket.h>
#include <transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace cloudata;

class ThriftCloudataServiceHandler : virtual public ThriftCloudataServiceIf {
 public:
  ThriftCloudataServiceHandler() {
    // Your initialization goes here
  }

  void listTables(std::vector<ThriftTableSchema> & _return) {
    // Your implementation goes here
    printf("listTables\n");
  }

  void put(const std::string& tableName, const ThriftRow& row, const bool useSystemTimestamp) {
    // Your implementation goes here
    printf("put\n");
  }

  void removeRow(const std::string& tableName, const std::string& rowKey) {
    // Your implementation goes here
    printf("removeRow\n");
  }

  void removeRowWithTime(const std::string& tableName, const std::string& rowKey, const std::string& timestamp) {
    // Your implementation goes here
    printf("removeRowWithTime\n");
  }

  void remove(const std::string& tableName, const std::string& rowKey, const std::string& columnName, const std::string& cellKey) {
    // Your implementation goes here
    printf("remove\n");
  }

  bool hasValue(const std::string& tableName, const std::string& columnName, const std::string& rowKey) {
    // Your implementation goes here
    printf("hasValue\n");
  }

  void getValue(std::string& _return, const std::string& tableName, const std::string& rowKey, const std::string& columnName, const std::string& cellKey) {
    // Your implementation goes here
    printf("getValue\n");
  }

  void get(ThriftRow& _return, const std::string& tableName, const std::string& rowKey) {
    // Your implementation goes here
    printf("get\n");
  }

  void getColumnRow(ThriftRow& _return, const std::string& tableName, const std::string& rowKey, const std::vector<std::string> & columnNames) {
    // Your implementation goes here
    printf("getColumnRow\n");
  }

  void createTable(const ThriftTableSchema& tableSchema) {
    // Your implementation goes here
    printf("createTable\n");
  }

  bool existsTable(const std::string& tableName) {
    // Your implementation goes here
    printf("existsTable\n");
  }

  void dropTable(const std::string& tableName) {
    // Your implementation goes here
    printf("dropTable\n");
  }

  void truncateTable(const std::string& tableName, const bool clearPartitionInfo) {
    // Your implementation goes here
    printf("truncateTable\n");
  }

  void truncateColumn(const std::string& tableName, const std::string& columnName) {
    // Your implementation goes here
    printf("truncateColumn\n");
  }

  void descTable(ThriftTableSchema& _return, const std::string& tableName) {
    // Your implementation goes here
    printf("descTable\n");
  }

  void addColumn(const std::string& tableName, const std::string& addedColumnName) {
    // Your implementation goes here
    printf("addColumn\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<ThriftCloudataServiceHandler> handler(new ThriftCloudataServiceHandler());
  shared_ptr<TProcessor> processor(new ThriftCloudataServiceProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

