//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SequenceInfo : NSObject
{
    unsigned int _MoreView_Seq;
    unsigned int _Setting_Seq;
    unsigned int _Privacy_Seq;
    unsigned int _RecentOption_Seq;
    unsigned int _General_Seq;
    unsigned int _Plugin_Seq;
}

+ (void)initialize;
+ (void)PBArrayAdd_Plugin_Seq;
+ (void)PBArrayAdd_General_Seq;
+ (void)PBArrayAdd_RecentOption_Seq;
+ (void)PBArrayAdd_Privacy_Seq;
+ (void)PBArrayAdd_Setting_Seq;
+ (void)PBArrayAdd_MoreView_Seq;
@property(nonatomic) unsigned int Plugin_Seq; // @synthesize Plugin_Seq=_Plugin_Seq;
@property(nonatomic) unsigned int General_Seq; // @synthesize General_Seq=_General_Seq;
@property(nonatomic) unsigned int RecentOption_Seq; // @synthesize RecentOption_Seq=_RecentOption_Seq;
@property(nonatomic) unsigned int Privacy_Seq; // @synthesize Privacy_Seq=_Privacy_Seq;
@property(nonatomic) unsigned int Setting_Seq; // @synthesize Setting_Seq=_Setting_Seq;
@property(nonatomic) unsigned int MoreView_Seq; // @synthesize MoreView_Seq=_MoreView_Seq;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

