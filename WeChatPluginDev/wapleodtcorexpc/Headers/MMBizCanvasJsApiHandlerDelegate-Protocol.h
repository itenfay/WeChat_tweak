//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMBizCanvasJsApiHandlerDelegate <NSObject>
- (void)onDeleteCanvasCard:(NSString *)arg1;
- (void)onPreloadImageWithUrl:(NSString *)arg1;
- (void)onItemClick:(unsigned int)arg1;
- (id)onGetInfoWithKey:(NSString *)arg1;
@end

