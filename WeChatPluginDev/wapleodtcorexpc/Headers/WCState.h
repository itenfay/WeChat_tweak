//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCState
{
    NSString *_name;
}

+ (id)stateWithState:(unsigned long long)arg1;
+ (id)stateNameOfState:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1;
- (_Bool)isEqualToState:(unsigned long long)arg1;

@end

