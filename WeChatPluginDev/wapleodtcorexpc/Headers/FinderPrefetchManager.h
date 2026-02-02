//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FinderPrefetchManager : NSObject
{
    struct weak_ptr<zidl::ZClientInvoker> client_invoker_;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateEduTipsSvrFlag:(id)arg1;
- (void)resetEduTipsRecordWithKey:(int)arg1;
- (void)markEduTipsNeverShowWithKey:(int)arg1;
- (void)markShowOnceEduTipsWithKey:(int)arg1;
- (_Bool)canShowEduTipsWithKey:(int)arg1;
- (_Bool)hasEnoughValidLocalFeeds:(int)arg1 commentScene:(int)arg2 count:(int)arg3;
- (id)localFeedArrayWithFeedSource:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(int)arg3;
- (id)localFeedArray:(int)arg1 commentScene:(int)arg2 limitCount:(int)arg3;
- (void)removeLocalBackupFeeds:(id)arg1;
- (void)updateLocalBackupFeed:(id)arg1 commentScene:(int)arg2 feedSource:(unsigned long long)arg3;
- (void)initWithDbDirPath:(id)arg1;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)zidlBuild;
- (shared_ptr_91287a9c)getClientInvoker;
- (void)attachClientInvoker:(const void *)arg1;

@end

