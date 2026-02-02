//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol WCFinderCommentPostMgrDelegate;

@interface WCFinderCommentPostMgr : NSObject
{
    id <WCFinderCommentPostMgrDelegate> _delegate;
    NSMutableArray *_commentQueue;
    NSMutableDictionary *_commentPostingQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *commentPostingQueue; // @synthesize commentPostingQueue=_commentPostingQueue;
@property(retain, nonatomic) NSMutableArray *commentQueue; // @synthesize commentQueue=_commentQueue;
@property(nonatomic) __weak id <WCFinderCommentPostMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addPostComment:(id)arg1;
- (void)commentPostShouldnotRePostWithComment:(id)arg1;
- (void)commentPostNeedRePostWithComment:(id)arg1;
- (void)commentPostSuccessfulWithComment:(id)arg1;
- (void)syncQueueToLocal;
- (void)checkQueue;
- (id)initWithDelegate:(id)arg1;

@end

