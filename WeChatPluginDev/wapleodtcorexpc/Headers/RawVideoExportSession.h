//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetExportSession;

@interface RawVideoExportSession : NSObject
{
    unsigned long long _type;
    AVAssetExportSession *_exportSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithExportSession:(id)arg1 type:(unsigned long long)arg2;

@end

