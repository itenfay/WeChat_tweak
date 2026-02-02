//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, ParametersModel;

@interface EventModel : NSObject
{
    NSString *_Type;
    long long _RelativeTime;
    long long _Index;
    NSString *_Path;
    long long _Duration;
    ParametersModel *_Parameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ParametersModel *Parameters; // @synthesize Parameters=_Parameters;
@property(nonatomic) long long Duration; // @synthesize Duration=_Duration;
@property(copy, nonatomic) NSString *Path; // @synthesize Path=_Path;
@property(nonatomic) long long Index; // @synthesize Index=_Index;
@property(nonatomic) long long RelativeTime; // @synthesize RelativeTime=_RelativeTime;
@property(copy, nonatomic) NSString *Type; // @synthesize Type=_Type;

@end

