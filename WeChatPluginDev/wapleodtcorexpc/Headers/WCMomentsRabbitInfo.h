//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLiveShareItem;

@interface WCMomentsRabbitInfo : NSObject
{
    _Bool _enabled;
    WCFinderLiveShareItem *_finderLiveItem;
    WCFinderLiveShareItem *_specifiedFinderLiveItem;
}

+ (id)fromXMLParentNode:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_finderLiveItem;
+ (void)PBArrayAdd_enabled;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveShareItem *specifiedFinderLiveItem; // @synthesize specifiedFinderLiveItem=_specifiedFinderLiveItem;
@property(retain, nonatomic) WCFinderLiveShareItem *finderLiveItem; // @synthesize finderLiveItem=_finderLiveItem;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)toXML;
@property(readonly, copy, nonatomic) NSString *finderLiveSourceName;
@property(readonly, nonatomic) long long contentStyle;
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

