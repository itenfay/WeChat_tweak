//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveKTVSongResourceLoadResult, NSString;

@interface MMFinderLiveKTVSongResourceParseTask : NSObject
{
    _Bool _isParseFinished;
    MMFinderLiveKTVSongResourceLoadResult *_resource;
    NSString *_parseResourceDir;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isParseFinished; // @synthesize isParseFinished=_isParseFinished;
@property(retain, nonatomic) NSString *parseResourceDir; // @synthesize parseResourceDir=_parseResourceDir;
@property(retain, nonatomic) MMFinderLiveKTVSongResourceLoadResult *resource; // @synthesize resource=_resource;
- (id)createAccSongPath;
- (id)createOriginalSongPath;
- (void)onParseFinish;
- (void)parseAccSongResource:(CDUnknownBlockType)arg1;
- (void)parseOriSongResource:(CDUnknownBlockType)arg1;
- (void)parseNoteResource:(CDUnknownBlockType)arg1;
- (void)parseQrcResource:(CDUnknownBlockType)arg1;
- (void)parseResource:(CDUnknownBlockType)arg1;
- (id)initWithResource:(id)arg1 parseResourceDir:(id)arg2;

@end

