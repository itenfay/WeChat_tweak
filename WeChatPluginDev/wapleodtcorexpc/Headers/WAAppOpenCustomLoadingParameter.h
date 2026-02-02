//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppOpenCustomLoadingParameter : NSObject
{
    NSString *_extraData;
    Class _customLoadingClass;
}

- (void).cxx_destruct;
@property(nonatomic) Class customLoadingClass; // @synthesize customLoadingClass=_customLoadingClass;
@property(copy, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;

@end

