//
//  AppRecords.h
//  LazyTableImages
//
//  Created by VcaiTech on 16/7/20.
//
//

#import <Foundation/Foundation.h>

@interface VCPhoto : NSObject

@property (nonatomic, strong) UIImage *appIcon;
@property (nonatomic, strong) NSString *imageURLString;
@property (nonatomic, assign) NSInteger tagIndex;

@end

@interface VCCellRecord : NSObject

@property (nonatomic, strong) NSString *titleContent;
@property (nonatomic, strong) NSString *desText;
@property (nonatomic, strong) NSString *urlString;
@property (nonatomic, strong) NSMutableArray *photos;

@end
