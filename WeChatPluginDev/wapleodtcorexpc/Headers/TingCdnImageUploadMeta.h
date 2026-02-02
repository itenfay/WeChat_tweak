//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TingCdnImageUploadTask;

@interface TingCdnImageUploadMeta : NSObject
{
    NSString *_imagePath;
    CDUnknownBlockType _complection;
    TingCdnImageUploadTask *_uploadTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingCdnImageUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(copy, nonatomic) CDUnknownBlockType complection; // @synthesize complection=_complection;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;

@end

