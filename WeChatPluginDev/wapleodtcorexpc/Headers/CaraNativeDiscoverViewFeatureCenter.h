//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CaraNativeDiscoverViewFeatureCenter : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct CaraNativeDiscoverViewFeatureCenterCppCover cpp_cover;
    struct weak_ptr<cara::CaraNativeDiscoverViewFeatureCenterDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)titleOfBadgeAtLiveCell;
- (id)anchorOfBadgeAtLiveCell;
- (int)unreadAtLiveCell;
- (_Bool)badgeAtLiveCell;
- (int)unreadAtChannelsCell;
- (_Bool)badgeAtChannelsCell;
- (_Bool)badgeAtTopStoriesCell;
- (int)unreadAtTopStoriesCell;
- (_Bool)badgeAtMomentsCell;
- (int)unreadAtMomentsCell;
- (_Bool)badgeAtDiscover;
- (int)unreadAtDiscover;
- (id)init;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_e4f6c773)getDispatcher;

@end

