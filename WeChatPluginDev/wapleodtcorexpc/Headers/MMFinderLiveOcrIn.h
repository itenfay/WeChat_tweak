//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMFinderLiveOcrIn : NSObject
{
    UIImage *_image;
    id _userInfo;
    NSString *_path;
}

+ (id)buildInputWithImage:(id)arg1 path:(id)arg2 userInfo:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

@end

