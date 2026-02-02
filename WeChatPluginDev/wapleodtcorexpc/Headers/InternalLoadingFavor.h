//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol InternalLoadingFavorDelegate;

@interface InternalLoadingFavor : NSObject
{
    id <InternalLoadingFavorDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <InternalLoadingFavorDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onWCPayBusiF2FGetFavorCgiError:(id)arg1;
- (void)onWCPayBusiF2FGetFavorCgiResp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

