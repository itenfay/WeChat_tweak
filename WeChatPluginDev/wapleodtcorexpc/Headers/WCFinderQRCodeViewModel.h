//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol WCFinderQRCodeViewModelDelegate;

@interface WCFinderQRCodeViewModel : NSObject
{
    unsigned long long _entryScene;
    UIViewController *_viewCtrl;
    id <WCFinderQRCodeViewModelDelegate> _delegate;
    NSString *_fromUserName;
    NSString *_talkerName;
    NSString *_userQRCodeUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userQRCodeUrl; // @synthesize userQRCodeUrl=_userQRCodeUrl;
@property(copy, nonatomic) NSString *talkerName; // @synthesize talkerName=_talkerName;
@property(copy, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(nonatomic) __weak id <WCFinderQRCodeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *viewCtrl; // @synthesize viewCtrl=_viewCtrl;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
- (id)parseQuerysWithUrlString:(id)arg1;
- (id)parseFinderFeedQRCodeUrl:(id)arg1;
- (void)getUserCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getUserCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)startHandleFinderFeedQRCodeUrl:(id)arg1 scanType:(unsigned int)arg2;
- (void)startHandleFinderUserQRCodeUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

