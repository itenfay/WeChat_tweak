//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCAdChannelContent : NSObject
{
    int _scene;
    NSString *_uxInfo;
    NSMutableArray *_adTraceMsgList;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *adTraceMsgList; // @synthesize adTraceMsgList=_adTraceMsgList;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;

@end

