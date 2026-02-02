//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPMediaRecord : NSObject
{
    _Bool _isMultiTrack;
    _Bool _selectedSubtitle;
    unsigned long long _downloadType;
    NSString *_mediaResolution;
    long long _mediaRate;
    long long _mediaDurationMs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool selectedSubtitle; // @synthesize selectedSubtitle=_selectedSubtitle;
@property(nonatomic) _Bool isMultiTrack; // @synthesize isMultiTrack=_isMultiTrack;
@property(nonatomic) long long mediaDurationMs; // @synthesize mediaDurationMs=_mediaDurationMs;
@property(nonatomic) long long mediaRate; // @synthesize mediaRate=_mediaRate;
@property(retain, nonatomic) NSString *mediaResolution; // @synthesize mediaResolution=_mediaResolution;
@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;

@end

