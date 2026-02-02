//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveStorageCleanupPinningToken, NSString;

@interface MMFinderLivePlayGiftAnimationCommandResource : NSObject
{
    NSString *_uri;
    NSString *_md5;
    MMLiveStorageCleanupPinningToken *_pinningToken;
}

+ (id)resourceWithBackendModel:(id)arg1;
+ (id)resourceWithUri:(id)arg1 md5:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *pinningToken; // @synthesize pinningToken=_pinningToken;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;

@end

