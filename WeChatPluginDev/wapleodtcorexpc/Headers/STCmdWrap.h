//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface STCmdWrap : NSObject
{
    struct stCmd *_pCmd;
}

+ (id)createInstance:(struct stCmd)arg1;
@property(nonatomic) struct stCmd *pCmd; // @synthesize pCmd=_pCmd;
- (void)dealloc;

@end

