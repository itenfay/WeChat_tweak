//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CaraNativeFinderPublishProphetContext : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct CaraNativeFinderPublishProphetContextCppCover cpp_cover;
    struct weak_ptr<cara::CaraNativeFinderPublishProphetContextDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)patMusicType;
- (int)poiType;
- (int)videoSourceType;
- (_Bool)hasCleanUpShortDesc;
- (_Bool)hasCleanUpLongDesc;
- (_Bool)hasClickShortDescTextView;
- (_Bool)hasClickLongDescTextView;
- (_Bool)hasOriginalStatementEntry;
- (_Bool)newSelectOnPostPage;
- (int)videoPlayDuration;
- (_Bool)useVideoTemplateInfo;
- (float)fileSize;
- (int)editTimeMs;
- (float)originVideoFrameRate;
- (float)originAudioBitrate;
- (int)originHight;
- (int)originWidth;
- (float)originBitrate;
- (_Bool)enterBackgroundOnPostPage;
- (_Bool)hasInvalidWatermark;
- (_Bool)postFromDraft;
- (_Bool)hasExtReading;
- (int)shortDescLength;
- (int)longDescLength;
- (_Bool)isSearchMusic;
- (int)videoMusicIndex;
- (_Bool)videoMusicIdValid;
- (int)videoTextNum;
- (int)videoEmojiNum;
- (int)videoDurationMs;
- (float)predictProbThreshold;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initWithZidlImpl:(id)arg1;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_d18e0a09)getDispatcher;

@end

