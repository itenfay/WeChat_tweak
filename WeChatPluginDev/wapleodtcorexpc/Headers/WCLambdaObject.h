//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface WCLambdaObject : NSObject
{
    CDUnknownBlockType _lambdaAction;
}

+ (id)createWithLambda:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType lambdaAction; // @synthesize lambdaAction=_lambdaAction;
- (void)execute;
- (void)executeWithData:(id)arg1;
- (id)initWithLambda:(CDUnknownBlockType)arg1;

@end
