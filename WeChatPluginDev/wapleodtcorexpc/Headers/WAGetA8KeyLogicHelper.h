//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetA8KeyLogic, NSString;
@protocol WAWAGetA8KeyLogicHelperDelegate;

@interface WAGetA8KeyLogicHelper : NSObject
{
    GetA8KeyLogic *_logic;
    id <WAWAGetA8KeyLogicHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAWAGetA8KeyLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GetA8KeyLogic *logic; // @synthesize logic=_logic;
- (void)weappGetA8KeyWithCodeStr:(id)arg1 geta8keyScene:(long long)arg2;
- (void)weappGetA8KeyWithCodeStr:(id)arg1 weappCodeVerision:(long long)arg2 geta8keyScene:(long long)arg3;
- (unsigned long long)getSourceType;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)onGetA8KeyFail;
- (void)onGetA8KeyEnd;
- (void)onGetA8KeyResult:(id)arg1;
- (id)allA8KeyLogic;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

