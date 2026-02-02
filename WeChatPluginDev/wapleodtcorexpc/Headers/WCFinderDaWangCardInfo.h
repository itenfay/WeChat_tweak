//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSString, WCFinderDaWangResponseBusiness;

@interface WCFinderDaWangCardInfo : NSObject
{
    _Bool _hadRequestFinished;
    CDUnknownBlockType _updateBlock;
    WCFinderDaWangResponseBusiness *_lastResponseBusiness;
    NSDateFormatter *_dateFormatter;
    NSString *_lastIPV4;
    NSString *_lastIPV6;
    NSString *_currentSeqId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentSeqId; // @synthesize currentSeqId=_currentSeqId;
@property(copy, nonatomic) NSString *lastIPV6; // @synthesize lastIPV6=_lastIPV6;
@property(copy, nonatomic) NSString *lastIPV4; // @synthesize lastIPV4=_lastIPV4;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) _Bool hadRequestFinished; // @synthesize hadRequestFinished=_hadRequestFinished;
@property(retain, nonatomic) WCFinderDaWangResponseBusiness *lastResponseBusiness; // @synthesize lastResponseBusiness=_lastResponseBusiness;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (id)_generateCombinedStringWithSystemParameter:(id)arg1 businessParameter:(id)arg2;
- (id)recursiveStringFromObject:(id)arg1;
- (id)getSM3StringWithSystemParameter:(id)arg1 businessParameter:(id)arg2;
- (id)hexStringWithData:(id)arg1;
- (id)sm3WithValue:(id)arg1 key:(id)arg2;
- (void)getRequestWithBusinessParameter:(id)arg1;
- (_Bool)IPStringsEqual:(id)arg1 newIP:(id)arg2;
- (void)updateIPV4:(id)arg1 IPV6:(id)arg2;
- (id)genSystemDict;
- (id)init;

@end

