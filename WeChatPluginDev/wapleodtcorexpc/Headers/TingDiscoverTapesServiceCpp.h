//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingDiscoverTapesServiceCpp
{
}

+ (id)createWithScene:(int)arg1;
- (void)opLike:(unsigned int)arg1 scene:(int)arg2 listenId:(id)arg3 isCancel:(_Bool)arg4;
- (void)getListenCommentInfo:(unsigned int)arg1 listenIds:(id)arg2;
- (_Bool)discoverMusicTapes:(unsigned int)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

