//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTextNodeModel : NSObject
{
    NSString *_originText;
    NSString *_modifiedText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *modifiedText; // @synthesize modifiedText=_modifiedText;
@property(copy, nonatomic) NSString *originText; // @synthesize originText=_originText;

@end

