//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppConfigShareModel;

@interface LiteAppConfigModel : NSObject
{
    LiteAppConfigShareModel *_share;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LiteAppConfigShareModel *share; // @synthesize share=_share;
- (id)init;

@end

