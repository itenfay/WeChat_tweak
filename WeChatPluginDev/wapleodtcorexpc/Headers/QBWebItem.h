//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface QBWebItem : NSObject
{
    _Bool _isCanInitEventHasAdded;
    int _apnType;
    NSURL *_URL;
    NSMutableArray *_eventArray;
    NSString *_HTTPMethod;
    long long _itemType;
    long long _statusCode;
    NSString *_errorDescription;
    long long _directType;
    NSString *_MIMEType;
    unsigned long long _dataLength;
    NSDictionary *_MIMEMap;
    double _beginLoadingTimestamp;
    double _finishLoadingTimestamp;
    NSMutableDictionary *_itemInfo;
}

+ (id)itemWithURL:(id)arg1;
@property(nonatomic) _Bool isCanInitEventHasAdded; // @synthesize isCanInitEventHasAdded=_isCanInitEventHasAdded;
@property(retain, nonatomic) NSMutableDictionary *itemInfo; // @synthesize itemInfo=_itemInfo;
@property(nonatomic) double finishLoadingTimestamp; // @synthesize finishLoadingTimestamp=_finishLoadingTimestamp;
@property(nonatomic) double beginLoadingTimestamp; // @synthesize beginLoadingTimestamp=_beginLoadingTimestamp;
@property(retain, nonatomic) NSDictionary *MIMEMap; // @synthesize MIMEMap=_MIMEMap;
@property(nonatomic) unsigned long long dataLength; // @synthesize dataLength=_dataLength;
@property(retain, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(nonatomic) int apnType; // @synthesize apnType=_apnType;
@property(nonatomic) long long directType; // @synthesize directType=_directType;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(retain, nonatomic) NSMutableArray *eventArray; // @synthesize eventArray=_eventArray;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)commonInfo;
- (id)networkDescriptionWithAPN:(int)arg1;
- (id)itemTypeDescription;
- (id)JSONInfo;
- (void)addItemInfoWithKey:(id)arg1 value:(id)arg2 allowDuplicateKey:(_Bool)arg3;
- (void)addEvent:(id)arg1;
- (id)init;
- (void)parseItemTypeWithEvent:(id)arg1;
- (long long)itemTypeWithMIME:(id)arg1;
- (long long)itemTypeWithFileExtension:(id)arg1;

@end

