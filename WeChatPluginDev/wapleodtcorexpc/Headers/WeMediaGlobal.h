//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WeMediaDelegate;

@interface WeMediaGlobal : NSObject
{
    int weloglvl;
    id <WeMediaDelegate> _delegate;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WeMediaDelegate> delegate; // @synthesize delegate=_delegate;
- (int)getLoglvl;
- (void)setLoglvl:(int)arg1;
- (id)init;

@end

