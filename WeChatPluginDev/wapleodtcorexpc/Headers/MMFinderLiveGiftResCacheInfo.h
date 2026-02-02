//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveGiftResCacheInfo : NSObject
{
    _Bool _purgeIfUnused;
    _Bool _usageFlag;
    NSString *_productId;
    NSString *_fileMd5;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usageFlag; // @synthesize usageFlag=_usageFlag;
@property(nonatomic) _Bool purgeIfUnused; // @synthesize purgeIfUnused=_purgeIfUnused;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;

@end

