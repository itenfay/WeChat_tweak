//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderCommentDetailViewModel;

@interface WCFinderCommentDetailViewReporter : NSObject
{
    WCFinderCommentDetailViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCommentDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)_viewIDForViewType:(unsigned long long)arg1;
- (id)_eventIDForEvent:(unsigned long long)arg1;
- (void)_cgiResportWithEventID:(id)arg1 viewID:(id)arg2 params:(id)arg3;
- (void)comment:(id)arg1 viewType:(unsigned long long)arg2 receiveEvent:(unsigned long long)arg3;
- (id)initWithViewModel:(id)arg1;

@end

