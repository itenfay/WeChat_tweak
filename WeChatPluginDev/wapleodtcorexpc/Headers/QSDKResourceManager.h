//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSBundle;

@interface QSDKResourceManager : NSObject
{
    NSBundle *_bundle;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)init;
- (void)setupBundle;
- (id)imageNamed:(id)arg1;

@end

