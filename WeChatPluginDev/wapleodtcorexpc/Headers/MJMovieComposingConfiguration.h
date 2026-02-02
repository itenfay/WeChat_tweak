//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJMovieComposingConfiguration : NSObject
{
    _Bool _shouldShowTitleGuide;
    _Bool _shouldShowAssetAddingEntry;
    _Bool _isRecognitionGuideEnabled;
    _Bool _isDraftEnabled;
    _Bool _isAsyncExportEnabled;
    _Bool _isAudioSessionOccupiedOutside;
    long long _entryScene;
}

@property(readonly, nonatomic) long long entryScene; // @synthesize entryScene=_entryScene;
@property(readonly, nonatomic) _Bool isAudioSessionOccupiedOutside; // @synthesize isAudioSessionOccupiedOutside=_isAudioSessionOccupiedOutside;
@property(readonly, nonatomic) _Bool isAsyncExportEnabled; // @synthesize isAsyncExportEnabled=_isAsyncExportEnabled;
@property(readonly, nonatomic) _Bool isDraftEnabled; // @synthesize isDraftEnabled=_isDraftEnabled;
@property(readonly, nonatomic) _Bool isRecognitionGuideEnabled; // @synthesize isRecognitionGuideEnabled=_isRecognitionGuideEnabled;
@property(readonly, nonatomic) _Bool shouldShowAssetAddingEntry; // @synthesize shouldShowAssetAddingEntry=_shouldShowAssetAddingEntry;
@property(readonly, nonatomic) _Bool shouldShowTitleGuide; // @synthesize shouldShowTitleGuide=_shouldShowTitleGuide;
- (id)description;
- (id)initWithShouldShowTitleGuide:(_Bool)arg1 shouldShowAssetAddingEntry:(_Bool)arg2 isRecognitionGuideEnabled:(_Bool)arg3 isDraftEnabled:(_Bool)arg4 isAsyncExportEnabled:(_Bool)arg5 isAudioSessionOccupiedOutside:(_Bool)arg6 entryScene:(long long)arg7;

@end

