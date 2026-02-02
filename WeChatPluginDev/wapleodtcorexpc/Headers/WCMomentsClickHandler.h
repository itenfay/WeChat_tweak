//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, MMURLHandler;
@protocol WCMomentsClickHandlerDelegate;

@interface WCMomentsClickHandler : NSObject
{
    id <WCMomentsClickHandlerDelegate> _delegate;
    MMUIViewController *_fromViewController;
    MMURLHandler *_urlHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMURLHandler *urlHandler; // @synthesize urlHandler=_urlHandler;
@property(nonatomic) __weak MMUIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) __weak id <WCMomentsClickHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getProfileContactWithUsername:(id)arg1;
- (_Bool)handleClickTingUrlWithOptions:(id)arg1;
- (_Bool)handleClickURLWithOptions:(id)arg1;
- (_Bool)handleClickHotwordWithOptions:(id)arg1;
- (_Bool)handleClickTigerSourceWithOptions:(id)arg1;
- (_Bool)handleClickFinderProfileWithOptions:(id)arg1;
- (_Bool)handleClickBrandProfileWithOptions:(id)arg1;
- (_Bool)handleClickUserProfileWithOptions:(id)arg1;

@end

