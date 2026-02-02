//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol WAShareAppMessageThumbImagePoolDelegate;

@interface WAShareAppMessageThumbImagePool : NSObject
{
    id <WAShareAppMessageThumbImagePoolDelegate> _delegate;
    NSMutableDictionary *_thumbImageDictionary;
}

+ (double)getCompressRatioWithImage:(id)arg1;
+ (id)generateKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *thumbImageDictionary; // @synthesize thumbImageDictionary=_thumbImageDictionary;
@property(nonatomic) __weak id <WAShareAppMessageThumbImagePoolDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleWebImageWithURLString:(id)arg1 shouldCrop:(_Bool)arg2 cropSize:(struct CGSize)arg3 useOriginImage:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)forceUseOriginImageForKey:(id)arg1;
- (unsigned long long)typeForKey:(id)arg1;
- (void)popImageDataForKey:(id)arg1 snapFromTop:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)popImageDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerOriginImageData:(id)arg1 forKey:(id)arg2;
- (void)registerWebImageURLString:(id)arg1 forKey:(id)arg2 shouldCrop:(_Bool)arg3 cropSize:(struct CGSize)arg4;
- (void)registerLocalImageData:(id)arg1 forKey:(id)arg2 shouldCrop:(_Bool)arg3 cropSize:(struct CGSize)arg4;
- (void)registerSnapImageForKey:(id)arg1 shouldCrop:(_Bool)arg2 cropSize:(struct CGSize)arg3;

@end

