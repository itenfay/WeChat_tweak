//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCFinderCGIProfile : NSObject
{
    unsigned long long _cgiId;
    unsigned long long _totalCostMS;
    unsigned long long _connCostMS;
    unsigned long long _startPacketCostMS;
    unsigned long long _tlsCostMS;
    unsigned long long _readPacketCostMS;
    unsigned long long _reqSize;
    unsigned long long _respSize;
    unsigned long long _encodeCostMS;
    unsigned long long _decodeCostMS;
    NSMutableDictionary *_extInfo;
    unsigned long long _cbkBeginMS;
    unsigned long long _cbkEndMS;
}

+ (id)fromResponse:(id)arg1;
+ (id)profileWithCGIId:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cbkEndMS; // @synthesize cbkEndMS=_cbkEndMS;
@property(nonatomic) unsigned long long cbkBeginMS; // @synthesize cbkBeginMS=_cbkBeginMS;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned long long decodeCostMS; // @synthesize decodeCostMS=_decodeCostMS;
@property(nonatomic) unsigned long long encodeCostMS; // @synthesize encodeCostMS=_encodeCostMS;
@property(nonatomic) unsigned long long respSize; // @synthesize respSize=_respSize;
@property(nonatomic) unsigned long long reqSize; // @synthesize reqSize=_reqSize;
@property(nonatomic) unsigned long long readPacketCostMS; // @synthesize readPacketCostMS=_readPacketCostMS;
@property(nonatomic) unsigned long long tlsCostMS; // @synthesize tlsCostMS=_tlsCostMS;
@property(nonatomic) unsigned long long startPacketCostMS; // @synthesize startPacketCostMS=_startPacketCostMS;
@property(nonatomic) unsigned long long connCostMS; // @synthesize connCostMS=_connCostMS;
@property(nonatomic) unsigned long long totalCostMS; // @synthesize totalCostMS=_totalCostMS;
@property(nonatomic) unsigned long long cgiId; // @synthesize cgiId=_cgiId;
- (void)attachToResponse:(id)arg1;
- (id)toJson:(CDUnknownBlockType)arg1;

@end

