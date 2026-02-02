//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface StatusLogicCommentManager : NSObject
{
    struct weak_ptr<zidl::ZClientInvoker> client_invoker_;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)markAllNotifyRead;
- (int)getNotReadNotifyCount;
- (id)getCommentMessage:(id)arg1;
- (id)getLikeMessage:(id)arg1;
- (int)getMessageCount:(id)arg1;
- (id)getMessageByCondition:(int)arg1 isUnread:(_Bool)arg2 maxCreateTimeMs:(long long)arg3;
- (id)getAllMessage:(id)arg1;
- (id)clearAllMessage;
- (id)markAllMessageRead;
- (id)deleteMessage:(id)arg1;
- (id)updateCommentSendState:(id)arg1;
- (id)getCommentNoSendSuccess:(id)arg1;
- (id)deleteComment:(id)arg1 sequence:(long long)arg2;
- (id)insertOrReplaceComment:(id)arg1;
- (id)getLikeDataByUserNameAndId:(id)arg1 userName:(id)arg2;
- (id)getAllTextStatusLike:(id)arg1 limit:(int)arg2;
- (id)performSelfDoLike:(id)arg1 isLike:(_Bool)arg2;
- (id)deleteLikeData:(id)arg1 sequence:(long long)arg2;
- (id)insertOrReplaceLikeData:(id)arg1;
- (id)isLikeTextStatus:(id)arg1;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)zidlBuild;
- (shared_ptr_91287a9c)getClientInvoker;
- (void)attachClientInvoker:(const void *)arg1;

@end

