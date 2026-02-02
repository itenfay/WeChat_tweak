//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLiveShareItem;

@interface WCMomentsTigerInfo : NSObject
{
    _Bool _enabled;
    _Bool _sourceEnabled;
    WCFinderLiveShareItem *_finderLiveItem;
    long long _enterFinderLiveMode;
}

+ (id)fromXMLParentNode:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_enterFinderLiveMode;
+ (void)PBArrayAdd_finderLiveItem;
+ (void)PBArrayAdd_sourceEnabled;
+ (void)PBArrayAdd_enabled;
- (void).cxx_destruct;
@property(nonatomic) long long enterFinderLiveMode; // @synthesize enterFinderLiveMode=_enterFinderLiveMode;
@property(retain, nonatomic) WCFinderLiveShareItem *finderLiveItem; // @synthesize finderLiveItem=_finderLiveItem;
@property(nonatomic) _Bool sourceEnabled; // @synthesize sourceEnabled=_sourceEnabled;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)toXML;
@property(readonly, copy, nonatomic) NSString *finderLiveSourceName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

