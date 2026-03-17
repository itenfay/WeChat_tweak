//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BoundaryArg : NSObject
{
    unsigned int _up_bound;
    unsigned int _low_bound;
    unsigned int _arg_value;
}

@property(nonatomic) unsigned int arg_value; // @synthesize arg_value=_arg_value;
@property(nonatomic) unsigned int low_bound; // @synthesize low_bound=_low_bound;
@property(nonatomic) unsigned int up_bound; // @synthesize up_bound=_up_bound;

@end

