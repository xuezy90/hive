// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "ThriftHiveMetastore.h"
#include <protocol/TBinaryProtocol.h>
#include <server/TSimpleServer.h>
#include <transport/TServerSocket.h>
#include <transport/TBufferTransports.h>

using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using namespace apache::thrift::server;

using boost::shared_ptr;

using namespace Apache::Hadoop::Hive;

class ThriftHiveMetastoreHandler : virtual public ThriftHiveMetastoreIf {
 public:
  ThriftHiveMetastoreHandler() {
    // Your initialization goes here
  }

  bool create_database(const std::string& name, const std::string& description) {
    // Your implementation goes here
    printf("create_database\n");
  }

  void get_database(Database& _return, const std::string& name) {
    // Your implementation goes here
    printf("get_database\n");
  }

  bool drop_database(const std::string& name) {
    // Your implementation goes here
    printf("drop_database\n");
  }

  void get_databases(std::vector<std::string> & _return) {
    // Your implementation goes here
    printf("get_databases\n");
  }

  void get_type(Type& _return, const std::string& name) {
    // Your implementation goes here
    printf("get_type\n");
  }

  bool create_type(const Type& type) {
    // Your implementation goes here
    printf("create_type\n");
  }

  bool drop_type(const std::string& type) {
    // Your implementation goes here
    printf("drop_type\n");
  }

  void get_type_all(std::map<std::string, Type> & _return, const std::string& name) {
    // Your implementation goes here
    printf("get_type_all\n");
  }

  void get_fields(std::vector<FieldSchema> & _return, const std::string& db_name, const std::string& table_name) {
    // Your implementation goes here
    printf("get_fields\n");
  }

  void get_schema(std::vector<FieldSchema> & _return, const std::string& db_name, const std::string& table_name) {
    // Your implementation goes here
    printf("get_schema\n");
  }

  void create_table(const Table& tbl) {
    // Your implementation goes here
    printf("create_table\n");
  }

  void drop_table(const std::string& dbname, const std::string& name, const bool deleteData) {
    // Your implementation goes here
    printf("drop_table\n");
  }

  void get_tables(std::vector<std::string> & _return, const std::string& db_name, const std::string& pattern) {
    // Your implementation goes here
    printf("get_tables\n");
  }

  void get_table(Table& _return, const std::string& dbname, const std::string& tbl_name) {
    // Your implementation goes here
    printf("get_table\n");
  }

  void alter_table(const std::string& dbname, const std::string& tbl_name, const Table& new_tbl) {
    // Your implementation goes here
    printf("alter_table\n");
  }

  void add_partition(Partition& _return, const Partition& new_part) {
    // Your implementation goes here
    printf("add_partition\n");
  }

  void append_partition(Partition& _return, const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals) {
    // Your implementation goes here
    printf("append_partition\n");
  }

  void append_partition_by_name(Partition& _return, const std::string& db_name, const std::string& tbl_name, const std::string& part_name) {
    // Your implementation goes here
    printf("append_partition_by_name\n");
  }

  bool drop_partition(const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals, const bool deleteData) {
    // Your implementation goes here
    printf("drop_partition\n");
  }

  bool drop_partition_by_name(const std::string& db_name, const std::string& tbl_name, const std::string& part_name, const bool deleteData) {
    // Your implementation goes here
    printf("drop_partition_by_name\n");
  }

  void get_partition(Partition& _return, const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals) {
    // Your implementation goes here
    printf("get_partition\n");
  }

  void get_partition_by_name(Partition& _return, const std::string& db_name, const std::string& tbl_name, const std::string& part_name) {
    // Your implementation goes here
    printf("get_partition_by_name\n");
  }

  void get_partitions(std::vector<Partition> & _return, const std::string& db_name, const std::string& tbl_name, const int16_t max_parts) {
    // Your implementation goes here
    printf("get_partitions\n");
  }

  void get_partition_names(std::vector<std::string> & _return, const std::string& db_name, const std::string& tbl_name, const int16_t max_parts) {
    // Your implementation goes here
    printf("get_partition_names\n");
  }

  void get_partitions_ps(std::vector<Partition> & _return, const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals, const int16_t max_parts) {
    // Your implementation goes here
    printf("get_partitions_ps\n");
  }

  void get_partition_names_ps(std::vector<std::string> & _return, const std::string& db_name, const std::string& tbl_name, const std::vector<std::string> & part_vals, const int16_t max_parts) {
    // Your implementation goes here
    printf("get_partition_names_ps\n");
  }

  void alter_partition(const std::string& db_name, const std::string& tbl_name, const Partition& new_part) {
    // Your implementation goes here
    printf("alter_partition\n");
  }

  void get_config_value(std::string& _return, const std::string& name, const std::string& defaultValue) {
    // Your implementation goes here
    printf("get_config_value\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<ThriftHiveMetastoreHandler> handler(new ThriftHiveMetastoreHandler());
  shared_ptr<TProcessor> processor(new ThriftHiveMetastoreProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

