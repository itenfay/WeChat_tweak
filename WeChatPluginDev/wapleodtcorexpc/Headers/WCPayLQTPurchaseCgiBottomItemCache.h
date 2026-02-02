//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayLQTPurchaseCgiBottomItemCache : NSObject
{
    _Bool _autoPullUpKeyboard;
    _Bool _isShowProtocol;
    _Bool _isProtoclDefaultChecked;
    NSString *_bottomWording;
    NSString *_bottomTipsWording;
    NSArray *_protocolList;
    NSArray *_hintOfKeyboard;
}

+ (_Bool)saveBottomItemCache:(id)arg1 withEntranceType:(unsigned int)arg2;
+ (id)getBottomItemCacheWithEntranceType:(unsigned int)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_hintOfKeyboard;
+ (void)PBArrayAdd_protocolList;
+ (void)PBArrayAdd_bottomTipsWording;
+ (void)PBArrayAdd_bottomWording;
+ (void)PBArrayAdd_isProtoclDefaultChecked;
+ (void)PBArrayAdd_isShowProtocol;
+ (void)PBArrayAdd_autoPullUpKeyboard;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *hintOfKeyboard; // @synthesize hintOfKeyboard=_hintOfKeyboard;
@property(retain, nonatomic) NSArray *protocolList; // @synthesize protocolList=_protocolList;
@property(retain, nonatomic) NSString *bottomTipsWording; // @synthesize bottomTipsWording=_bottomTipsWording;
@property(retain, nonatomic) NSString *bottomWording; // @synthesize bottomWording=_bottomWording;
@property(nonatomic) _Bool isProtoclDefaultChecked; // @synthesize isProtoclDefaultChecked=_isProtoclDefaultChecked;
@property(nonatomic) _Bool isShowProtocol; // @synthesize isShowProtocol=_isShowProtocol;
@property(nonatomic) _Bool autoPullUpKeyboard; // @synthesize autoPullUpKeyboard=_autoPullUpKeyboard;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

