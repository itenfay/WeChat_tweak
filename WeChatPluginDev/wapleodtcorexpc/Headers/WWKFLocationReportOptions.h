//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WWKFLocationReportOptions : NSObject
{
    int _scene;
    NSString *_userName;
    NSString *_locationType;
}

- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *locationType; // @synthesize locationType=_locationType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

