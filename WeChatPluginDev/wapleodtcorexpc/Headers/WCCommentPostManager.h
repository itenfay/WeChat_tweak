//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol WCCommentPostManagerDelegate;

@interface WCCommentPostManager : NSObject
{
    id <WCCommentPostManagerDelegate> _delegate;
    NSMutableArray *_commentQueue;
    NSString *_queuePath;
    NSString *_postingCommentPath;
    NSMutableDictionary *_commentPostingQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *commentPostingQueue; // @synthesize commentPostingQueue=_commentPostingQueue;
@property(copy, nonatomic) NSString *postingCommentPath; // @synthesize postingCommentPath=_postingCommentPath;
@property(copy, nonatomic) NSString *queuePath; // @synthesize queuePath=_queuePath;
@property(retain, nonatomic) NSMutableArray *commentQueue; // @synthesize commentQueue=_commentQueue;
@property(nonatomic) __weak id <WCCommentPostManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addPostComment:(id)arg1;
- (void)commentPostShouldnotRePostWithComment:(id)arg1;
- (void)commentPostNeedRePostWithComment:(id)arg1;
- (void)commentPostSuccessfulWithComment:(id)arg1;
- (void)syncQueueToLocal;
- (void)checkQueue;
- (id)initWithDelegate:(id)arg1 queuePath:(id)arg2 postingCommentPath:(id)arg3;

@end

