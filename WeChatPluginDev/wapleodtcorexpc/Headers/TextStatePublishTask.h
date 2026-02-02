//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLocatingCoordinateLogic, MMTextStateMediaItem, MMTextStateVideoItem, NSString, TextStateModel, TextStatePublishParameter, WCCgiBlockHelper;
@protocol TextStatePublishTaskDeletate;

@interface TextStatePublishTask : NSObject
{
    _Bool _hasFetchedLocation;
    unsigned int _state;
    id <TextStatePublishTaskDeletate> _delegate;
    TextStateModel *_textState;
    TextStatePublishParameter *_parameter;
    NSString *_taskId;
    NSString *_errorMessage;
    MMTextStateMediaItem *_associateImageItem;
    MMTextStateVideoItem *_associateVideoItem;
    NSString *_mediaId;
    WCCgiBlockHelper *_cgiBlockHelper;
    MMLocatingCoordinateLogic *_locationLogic;
}

+ (void)setFirstTextStateExpireTime:(unsigned int)arg1;
+ (id)generateClientMessageId;
+ (void)initialize;
+ (void)PBArrayAdd_parameter;
+ (void)PBArrayAdd_errorMessage;
+ (void)PBArrayAdd_state;
+ (void)PBArrayAdd_taskId;
+ (void)PBArrayAdd_textState;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLocatingCoordinateLogic *locationLogic; // @synthesize locationLogic=_locationLogic;
@property(retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper; // @synthesize cgiBlockHelper=_cgiBlockHelper;
@property(nonatomic) _Bool hasFetchedLocation; // @synthesize hasFetchedLocation=_hasFetchedLocation;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) MMTextStateVideoItem *associateVideoItem; // @synthesize associateVideoItem=_associateVideoItem;
@property(retain, nonatomic) MMTextStateMediaItem *associateImageItem; // @synthesize associateImageItem=_associateImageItem;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) TextStatePublishParameter *parameter; // @synthesize parameter=_parameter;
@property(retain, nonatomic) TextStateModel *textState; // @synthesize textState=_textState;
@property(nonatomic) __weak id <TextStatePublishTaskDeletate> delegate; // @synthesize delegate=_delegate;
- (void)requestPublishing;
- (void)onTextStateMediaUploadFail:(id)arg1;
- (void)onTextStateMediaUploadSuccess:(id)arg1;
- (void)uploadMedia;
- (_Bool)needUploadMedia;
- (void)requestLocation;
- (_Bool)needRequestLocation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTask:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)reportObject;
- (void)privateStartTask;
- (_Bool)startTask;
- (void)prepare;
- (id)initWithTextState:(id)arg1 associateMediaItem:(id)arg2 parameter:(id)arg3;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

