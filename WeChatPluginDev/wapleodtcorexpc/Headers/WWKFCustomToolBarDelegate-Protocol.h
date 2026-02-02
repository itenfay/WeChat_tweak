//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class COpenIMCustomToolBarItem;

@protocol WWKFCustomToolBarDelegate <NSObject>

@optional
- (void)onExposureCustomToolBarItem:(COpenIMCustomToolBarItem *)arg1;
- (void)onCompleteCustomToolBarItem:(COpenIMCustomToolBarItem *)arg1;
- (void)onClickCustomToolBarItem:(COpenIMCustomToolBarItem *)arg1;
@end

