//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveBoxId, NSString, WCFinderLiveMsgSessionInfo;

@interface MMFinderLiveProductQuestionBoxItem : NSObject
{
    _Bool _hasMsg;
    _Bool _hasLoaded;
    FinderLiveBoxId *_boxId;
    CDUnknownBlockType _hasMsgCallback;
    WCFinderLiveMsgSessionInfo *_session;
    CDUnknownBlockType _loadedCallback;
}

+ (id)genProductQuestionBoxWithSession:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType loadedCallback; // @synthesize loadedCallback=_loadedCallback;
@property(nonatomic) _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(retain, nonatomic) WCFinderLiveMsgSessionInfo *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType hasMsgCallback; // @synthesize hasMsgCallback=_hasMsgCallback;
@property(retain, nonatomic) FinderLiveBoxId *boxId; // @synthesize boxId=_boxId;
@property(nonatomic) _Bool hasMsg; // @synthesize hasMsg=_hasMsg;
- (void)checkSessionHasMsg;
- (void)onBoxLoaded;
- (_Bool)isCurrHasMsg;
@property(readonly, nonatomic) NSString *sessionId;
- (_Bool)isEqual:(id)arg1;
- (void)createBoxId;
- (id)initWithSession:(id)arg1;

@end

