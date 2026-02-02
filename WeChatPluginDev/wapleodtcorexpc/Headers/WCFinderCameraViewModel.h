//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMImagePickerManagerOptionObj, NSString;

@interface WCFinderCameraViewModel : NSObject
{
    MMImagePickerManagerOptionObj *_optionObj;
    NSString *_templateFollowFeedId;
    NSString *_musicSongId;
    NSString *_finderUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *musicSongId; // @synthesize musicSongId=_musicSongId;
@property(copy, nonatomic) NSString *templateFollowFeedId; // @synthesize templateFollowFeedId=_templateFollowFeedId;
@property(retain, nonatomic) MMImagePickerManagerOptionObj *optionObj; // @synthesize optionObj=_optionObj;
- (id)dataItemWithImagePathArray:(id)arg1;
- (id)dataItemForSight:(id)arg1;
- (id)createSightDraftWithVideoPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3;
- (id)createFinderPickerOption;
- (id)createFinderLiveCameraCoverOption;
- (id)createFinderCameraOptionBy:(id)arg1;
- (id)init;
- (id)initWithFinderUsername:(id)arg1;

@end

