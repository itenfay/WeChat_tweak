//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;
@protocol MMDragDelegate;

@interface MMDragManager : NSObject
{
    int _documentType;
    UIImage *_dragImage;
    NSURL *_dragVideoUrl;
    id <MMDragDelegate> _dragDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMDragDelegate> dragDelegate; // @synthesize dragDelegate=_dragDelegate;
@property(nonatomic) int documentType; // @synthesize documentType=_documentType;
@property(retain, nonatomic) NSURL *dragVideoUrl; // @synthesize dragVideoUrl=_dragVideoUrl;
@property(retain, nonatomic) UIImage *dragImage; // @synthesize dragImage=_dragImage;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)itemsForSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

