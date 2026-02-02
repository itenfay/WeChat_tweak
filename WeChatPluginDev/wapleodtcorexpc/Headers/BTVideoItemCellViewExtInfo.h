//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BTVideoItemCellViewExtInfo : NSObject
{
    unsigned int _autoPlayId;
    double _videoInitialTime;
    NSString *_videoCurrentSnapshotBase64Str;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int autoPlayId; // @synthesize autoPlayId=_autoPlayId;
@property(retain, nonatomic) NSString *videoCurrentSnapshotBase64Str; // @synthesize videoCurrentSnapshotBase64Str=_videoCurrentSnapshotBase64Str;
@property(nonatomic) double videoInitialTime; // @synthesize videoInitialTime=_videoInitialTime;

@end

