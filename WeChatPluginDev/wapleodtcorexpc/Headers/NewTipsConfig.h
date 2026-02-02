//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NewTipsConfig : NSObject
{
    _Bool _bShowParentTips;
    unsigned int _tipsId;
    unsigned long long _type;
    NSString *_uniqueId;
    NSString *_filterClassName;
}

+ (void)initialize;
+ (void)PBArrayAdd_bShowParentTips;
+ (void)PBArrayAdd_filterClassName;
+ (void)PBArrayAdd_uniqueId;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_tipsId;
- (void).cxx_destruct;
@property(nonatomic) _Bool bShowParentTips; // @synthesize bShowParentTips=_bShowParentTips;
@property(retain, nonatomic) NSString *filterClassName; // @synthesize filterClassName=_filterClassName;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned int tipsId; // @synthesize tipsId=_tipsId;
@property(readonly, copy) NSString *description;
- (_Bool)canShowTipsWithTipsInfo:(id)arg1;
- (_Bool)filterTipsWhenReceiveXml:(id)arg1;
- (id)generateNewTipsFilter;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

