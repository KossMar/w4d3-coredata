//
//  DetailViewController.h
//  coredata
//
//  Created by Mar Koss on 2017-10-25.
//  Copyright © 2017 Mar Koss. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "coredata+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) ToDo *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

