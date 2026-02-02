//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface TXRecordResult : NSObject
{
    long long _retCode;
    NSString *_descMsg;
    NSString *_videoPath;
    UIImage *_coverImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *descMsg; // @synthesize descMsg=_descMsg;
@property(nonatomic) long long retCode; // @synthesize retCode=_retCode;
- (id)description;

@end

