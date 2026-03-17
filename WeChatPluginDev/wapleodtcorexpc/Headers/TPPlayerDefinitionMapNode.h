//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerDefinitionMapNode : NSObject
{
    int _level;
    int _definition;
    long long _width;
    long long _height;
}

@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) int definition; // @synthesize definition=_definition;
@property(nonatomic) int level; // @synthesize level=_level;
- (id)init;

@end

