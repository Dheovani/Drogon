/**
 *
 *  Address.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "Address.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::postgres;

const std::string Address::Cols::_id = "id";
const std::string Address::Cols::_country = "country";
const std::string Address::Cols::_city = "city";
const std::string Address::Cols::_zipcode = "zipcode";
const std::string Address::primaryKeyName = "id";
const bool Address::hasPrimaryKey = true;
const std::string Address::tableName = "address";

const std::vector<typename Address::MetaData> Address::metaData_={
{"id","int64_t","bigint",8,1,1,1},
{"country","std::string","character varying",20,0,0,1},
{"city","std::string","character varying",20,0,0,1},
{"zipcode","std::string","character varying",20,0,0,0}
};
const std::string &Address::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}
Address::Address(const Row &r, const ssize_t indexOffset) noexcept
{
    if(indexOffset < 0)
    {
        if(!r["id"].isNull())
        {
            id_=std::make_shared<int64_t>(r["id"].as<int64_t>());
        }
        if(!r["country"].isNull())
        {
            country_=std::make_shared<std::string>(r["country"].as<std::string>());
        }
        if(!r["city"].isNull())
        {
            city_=std::make_shared<std::string>(r["city"].as<std::string>());
        }
        if(!r["zipcode"].isNull())
        {
            zipcode_=std::make_shared<std::string>(r["zipcode"].as<std::string>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if(offset + 4 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if(!r[index].isNull())
        {
            id_=std::make_shared<int64_t>(r[index].as<int64_t>());
        }
        index = offset + 1;
        if(!r[index].isNull())
        {
            country_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 2;
        if(!r[index].isNull())
        {
            city_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 3;
        if(!r[index].isNull())
        {
            zipcode_=std::make_shared<std::string>(r[index].as<std::string>());
        }
    }

}

Address::Address(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 4)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            id_=std::make_shared<int64_t>((int64_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            country_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            city_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            zipcode_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
}

Address::Address(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("id"))
    {
        dirtyFlag_[0]=true;
        if(!pJson["id"].isNull())
        {
            id_=std::make_shared<int64_t>((int64_t)pJson["id"].asInt64());
        }
    }
    if(pJson.isMember("country"))
    {
        dirtyFlag_[1]=true;
        if(!pJson["country"].isNull())
        {
            country_=std::make_shared<std::string>(pJson["country"].asString());
        }
    }
    if(pJson.isMember("city"))
    {
        dirtyFlag_[2]=true;
        if(!pJson["city"].isNull())
        {
            city_=std::make_shared<std::string>(pJson["city"].asString());
        }
    }
    if(pJson.isMember("zipcode"))
    {
        dirtyFlag_[3]=true;
        if(!pJson["zipcode"].isNull())
        {
            zipcode_=std::make_shared<std::string>(pJson["zipcode"].asString());
        }
    }
}

void Address::updateByMasqueradedJson(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 4)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            id_=std::make_shared<int64_t>((int64_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            country_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            city_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            zipcode_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
}

void Address::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("id"))
    {
        if(!pJson["id"].isNull())
        {
            id_=std::make_shared<int64_t>((int64_t)pJson["id"].asInt64());
        }
    }
    if(pJson.isMember("country"))
    {
        dirtyFlag_[1] = true;
        if(!pJson["country"].isNull())
        {
            country_=std::make_shared<std::string>(pJson["country"].asString());
        }
    }
    if(pJson.isMember("city"))
    {
        dirtyFlag_[2] = true;
        if(!pJson["city"].isNull())
        {
            city_=std::make_shared<std::string>(pJson["city"].asString());
        }
    }
    if(pJson.isMember("zipcode"))
    {
        dirtyFlag_[3] = true;
        if(!pJson["zipcode"].isNull())
        {
            zipcode_=std::make_shared<std::string>(pJson["zipcode"].asString());
        }
    }
}

const int64_t &Address::getValueOfId() const noexcept
{
    const static int64_t defaultValue = int64_t();
    if(id_)
        return *id_;
    return defaultValue;
}
const std::shared_ptr<int64_t> &Address::getId() const noexcept
{
    return id_;
}
void Address::setId(const int64_t &pId) noexcept
{
    id_ = std::make_shared<int64_t>(pId);
    dirtyFlag_[0] = true;
}
const typename Address::PrimaryKeyType & Address::getPrimaryKey() const
{
    assert(id_);
    return *id_;
}

const std::string &Address::getValueOfCountry() const noexcept
{
    const static std::string defaultValue = std::string();
    if(country_)
        return *country_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Address::getCountry() const noexcept
{
    return country_;
}
void Address::setCountry(const std::string &pCountry) noexcept
{
    country_ = std::make_shared<std::string>(pCountry);
    dirtyFlag_[1] = true;
}
void Address::setCountry(std::string &&pCountry) noexcept
{
    country_ = std::make_shared<std::string>(std::move(pCountry));
    dirtyFlag_[1] = true;
}

const std::string &Address::getValueOfCity() const noexcept
{
    const static std::string defaultValue = std::string();
    if(city_)
        return *city_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Address::getCity() const noexcept
{
    return city_;
}
void Address::setCity(const std::string &pCity) noexcept
{
    city_ = std::make_shared<std::string>(pCity);
    dirtyFlag_[2] = true;
}
void Address::setCity(std::string &&pCity) noexcept
{
    city_ = std::make_shared<std::string>(std::move(pCity));
    dirtyFlag_[2] = true;
}

const std::string &Address::getValueOfZipcode() const noexcept
{
    const static std::string defaultValue = std::string();
    if(zipcode_)
        return *zipcode_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Address::getZipcode() const noexcept
{
    return zipcode_;
}
void Address::setZipcode(const std::string &pZipcode) noexcept
{
    zipcode_ = std::make_shared<std::string>(pZipcode);
    dirtyFlag_[3] = true;
}
void Address::setZipcode(std::string &&pZipcode) noexcept
{
    zipcode_ = std::make_shared<std::string>(std::move(pZipcode));
    dirtyFlag_[3] = true;
}
void Address::setZipcodeToNull() noexcept
{
    zipcode_.reset();
    dirtyFlag_[3] = true;
}

void Address::updateId(const uint64_t id)
{
}

const std::vector<std::string> &Address::insertColumns() noexcept
{
    static const std::vector<std::string> inCols={
        "country",
        "city",
        "zipcode"
    };
    return inCols;
}

void Address::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[1])
    {
        if(getCountry())
        {
            binder << getValueOfCountry();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getCity())
        {
            binder << getValueOfCity();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getZipcode())
        {
            binder << getValueOfZipcode();
        }
        else
        {
            binder << nullptr;
        }
    }
}

const std::vector<std::string> Address::updateColumns() const
{
    std::vector<std::string> ret;
    if(dirtyFlag_[1])
    {
        ret.push_back(getColumnName(1));
    }
    if(dirtyFlag_[2])
    {
        ret.push_back(getColumnName(2));
    }
    if(dirtyFlag_[3])
    {
        ret.push_back(getColumnName(3));
    }
    return ret;
}

void Address::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[1])
    {
        if(getCountry())
        {
            binder << getValueOfCountry();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getCity())
        {
            binder << getValueOfCity();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getZipcode())
        {
            binder << getValueOfZipcode();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value Address::toJson() const
{
    Json::Value ret;
    if(getId())
    {
        ret["id"]=(Json::Int64)getValueOfId();
    }
    else
    {
        ret["id"]=Json::Value();
    }
    if(getCountry())
    {
        ret["country"]=getValueOfCountry();
    }
    else
    {
        ret["country"]=Json::Value();
    }
    if(getCity())
    {
        ret["city"]=getValueOfCity();
    }
    else
    {
        ret["city"]=Json::Value();
    }
    if(getZipcode())
    {
        ret["zipcode"]=getValueOfZipcode();
    }
    else
    {
        ret["zipcode"]=Json::Value();
    }
    return ret;
}

Json::Value Address::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if(pMasqueradingVector.size() == 4)
    {
        if(!pMasqueradingVector[0].empty())
        {
            if(getId())
            {
                ret[pMasqueradingVector[0]]=(Json::Int64)getValueOfId();
            }
            else
            {
                ret[pMasqueradingVector[0]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[1].empty())
        {
            if(getCountry())
            {
                ret[pMasqueradingVector[1]]=getValueOfCountry();
            }
            else
            {
                ret[pMasqueradingVector[1]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[2].empty())
        {
            if(getCity())
            {
                ret[pMasqueradingVector[2]]=getValueOfCity();
            }
            else
            {
                ret[pMasqueradingVector[2]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[3].empty())
        {
            if(getZipcode())
            {
                ret[pMasqueradingVector[3]]=getValueOfZipcode();
            }
            else
            {
                ret[pMasqueradingVector[3]]=Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if(getId())
    {
        ret["id"]=(Json::Int64)getValueOfId();
    }
    else
    {
        ret["id"]=Json::Value();
    }
    if(getCountry())
    {
        ret["country"]=getValueOfCountry();
    }
    else
    {
        ret["country"]=Json::Value();
    }
    if(getCity())
    {
        ret["city"]=getValueOfCity();
    }
    else
    {
        ret["city"]=Json::Value();
    }
    if(getZipcode())
    {
        ret["zipcode"]=getValueOfZipcode();
    }
    else
    {
        ret["zipcode"]=Json::Value();
    }
    return ret;
}

bool Address::validateJsonForCreation(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("id"))
    {
        if(!validJsonOfField(0, "id", pJson["id"], err, true))
            return false;
    }
    if(pJson.isMember("country"))
    {
        if(!validJsonOfField(1, "country", pJson["country"], err, true))
            return false;
    }
    else
    {
        err="The country column cannot be null";
        return false;
    }
    if(pJson.isMember("city"))
    {
        if(!validJsonOfField(2, "city", pJson["city"], err, true))
            return false;
    }
    else
    {
        err="The city column cannot be null";
        return false;
    }
    if(pJson.isMember("zipcode"))
    {
        if(!validJsonOfField(3, "zipcode", pJson["zipcode"], err, true))
            return false;
    }
    return true;
}
bool Address::validateMasqueradedJsonForCreation(const Json::Value &pJson,
                                                 const std::vector<std::string> &pMasqueradingVector,
                                                 std::string &err)
{
    if(pMasqueradingVector.size() != 4)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty())
      {
          if(pJson.isMember(pMasqueradingVector[0]))
          {
              if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, true))
                  return false;
          }
      }
      if(!pMasqueradingVector[1].empty())
      {
          if(pJson.isMember(pMasqueradingVector[1]))
          {
              if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[1] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[2].empty())
      {
          if(pJson.isMember(pMasqueradingVector[2]))
          {
              if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[2] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[3].empty())
      {
          if(pJson.isMember(pMasqueradingVector[3]))
          {
              if(!validJsonOfField(3, pMasqueradingVector[3], pJson[pMasqueradingVector[3]], err, true))
                  return false;
          }
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool Address::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("id"))
    {
        if(!validJsonOfField(0, "id", pJson["id"], err, false))
            return false;
    }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
    if(pJson.isMember("country"))
    {
        if(!validJsonOfField(1, "country", pJson["country"], err, false))
            return false;
    }
    if(pJson.isMember("city"))
    {
        if(!validJsonOfField(2, "city", pJson["city"], err, false))
            return false;
    }
    if(pJson.isMember("zipcode"))
    {
        if(!validJsonOfField(3, "zipcode", pJson["zipcode"], err, false))
            return false;
    }
    return true;
}
bool Address::validateMasqueradedJsonForUpdate(const Json::Value &pJson,
                                               const std::vector<std::string> &pMasqueradingVector,
                                               std::string &err)
{
    if(pMasqueradingVector.size() != 4)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
      {
          if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, false))
              return false;
      }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
      if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
      {
          if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, false))
              return false;
      }
      if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
      {
          if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, false))
              return false;
      }
      if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
      {
          if(!validJsonOfField(3, pMasqueradingVector[3], pJson[pMasqueradingVector[3]], err, false))
              return false;
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool Address::validJsonOfField(size_t index,
                               const std::string &fieldName,
                               const Json::Value &pJson,
                               std::string &err,
                               bool isForCreation)
{
    switch(index)
    {
        case 0:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(isForCreation)
            {
                err="The automatic primary key cannot be set";
                return false;
            }
            if(!pJson.isInt64())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 1:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            // asString().length() creates a string object, is there any better way to validate the length?
            if(pJson.isString() && pJson.asString().length() > 20)
            {
                err="String length exceeds limit for the " +
                    fieldName +
                    " field (the maximum value is 20)";
                return false;
            }

            break;
        case 2:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            // asString().length() creates a string object, is there any better way to validate the length?
            if(pJson.isString() && pJson.asString().length() > 20)
            {
                err="String length exceeds limit for the " +
                    fieldName +
                    " field (the maximum value is 20)";
                return false;
            }

            break;
        case 3:
            if(pJson.isNull())
            {
                return true;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            // asString().length() creates a string object, is there any better way to validate the length?
            if(pJson.isString() && pJson.asString().length() > 20)
            {
                err="String length exceeds limit for the " +
                    fieldName +
                    " field (the maximum value is 20)";
                return false;
            }

            break;
        default:
            err="Internal error in the server";
            return false;
    }
    return true;
}
